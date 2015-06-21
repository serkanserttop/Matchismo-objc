//
//  Deck.h
//  Matchismo
//
//  Created by Serkan Serttop on 23/05/15.
//  Copyright (c) 2015 Serkan Serttop. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
