//
//  Request.h
//  StealItAgain
//
//  Created by Nicholas Street on 28/04/2012.
//  Copyright (c) 2012 Haiku Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DataDAO;
@interface Request : NSObject

@property (nonatomic, retain) NSString* poet;
@property (nonatomic, retain) NSString* animal;
@property (nonatomic, retain) NSString* glassImageName;
@property (nonatomic, retain) NSString* rewardText;
@property (nonatomic, assign) int rewardAmount;


+(Request*)loadRandomRequest:(DataDAO*)data;

- (NSString*)theRequest;

@end
