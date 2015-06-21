//
//  Card.m
//  Matchismo
//
//  Created by Serkan Serttop on 21/05/15.
//  Copyright (c) 2015 Serkan Serttop. All rights reserved.
//

#import "Card.h"

@interface Card()

@end

@implementation Card

/*
@synthesize contents = _contents;

- (NSString *)contents
{
    return _contents;
}

- (void)setContents:(NSString *)contents
{
    _contents = contents;
}
*/
-(int) match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if([card.contents isEqualToString:self.contents]){
            score = 1;
        }
    }
    return score;
}

@end
