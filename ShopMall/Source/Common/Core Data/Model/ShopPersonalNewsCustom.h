//
//  ShopPersonalNewsCustom.h
//  DrPalm
//
//  Created by KingsleyYau on 13-3-9.
//  Copyright (c) 2013年 KingsleyYau. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ShopPersonalNews.h"
@interface ShopPersonalNews(Custom)
+ (NSNumber *)idWithDict:(NSDictionary *)dict;
- (void)updateWithDict:(NSDictionary *)dict;
@end
