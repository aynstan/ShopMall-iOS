//
//  ShopCategoryCustom.h
//  DrPalm
//
//  Created by KingsleyYau on 13-2-18.
//  Copyright (c) 2013年 KingsleyYau. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ShopCategory.h"
@interface ShopCategory (Custom)
+ (NSNumber *)idWithDict:(NSDictionary *)dict;
- (void)updateWithDict:(NSDictionary *)dict;
@end
