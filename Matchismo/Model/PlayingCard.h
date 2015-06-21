//
//  PlayingCard.h
//  Matchismo
//
//  Created by Serkan Serttop on 21/05/15.
//  Copyright (c) 2015 Serkan Serttop. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
