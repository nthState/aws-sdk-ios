//
// Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License").
// You may not use this file except in compliance with the License.
// A copy of the License is located at
//
// http://aws.amazon.com/apache2.0
//
// or in the "license" file accompanying this file. This file is distributed
// on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//

#import <Foundation/Foundation.h>
#import "AWSMobileAnalyticsConfiguring.h"
#import "AWSMobileAnalyticsDeliveryClient.h"
#import "AWSMobileAnalyticsHttpClient.h"
#import "AWSMobileAnalyticsSDKInfo.h"
#import "AWSMobileAnalyticsSystem.h"

@class AWSClientContext;

@protocol AZCredentialProvider;

@protocol AWSMobileAnalyticsContext <NSObject>


@required
@property (nonatomic, retain, readonly) NSString* identifier;

@required
@property (nonatomic, retain, readonly) AWSClientContext *clientContext;

@required
@property (nonatomic, retain, readonly) id<AWSMobileAnalyticsConfiguring> configuration;

@required
@property (nonatomic, retain, readonly) NSString* uniqueId;

@required
@property (nonatomic, retain, readonly) id<AWSMobileAnalyticsHttpClient> httpClient;

@required
@property (nonatomic, retain, readonly) AWSMobileAnalyticsSDKInfo* sdkInfo;

@required
@property (nonatomic, retain, readonly) id<AWSMobileAnalyticsSystem> system;

@required
-(void) synchronize;

@end
