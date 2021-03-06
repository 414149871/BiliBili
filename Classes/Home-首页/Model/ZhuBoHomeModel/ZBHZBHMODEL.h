//
//  ZBHZBHMODEL.h
//
//  Created by   on 2016/11/9
//  Copyright (c) 2016 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ZBHData;

@interface ZBHZBHMODEL : NSObject <NSCoding, NSCopying>

@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) ZBHData *data;
@property (nonatomic, assign) double code;

+ (instancetype)modelObjectWithDictionary:(NSDictionary *)dict;
- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionaryRepresentation;

@end
