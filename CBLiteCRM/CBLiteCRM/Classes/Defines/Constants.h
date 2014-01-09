//
//  Constants.h
//  Couchbase
//
//  Created by Andrew on 05.03.13.
//  Copyright (c) 2013 Couchbase All rights reserved.
//

#ifndef CBLiteCRM_Constants_h
#define CBLiteCRM_Constants_h

static NSString* const kSalesPersonDocType = @"salesperson";
static NSString* const kOpportDocType = @"opportunity";
static NSString* const kContactDocType = @"contact";
static NSString* const kCustomerDocType = @"customer";
static NSString* const kContactOpportunityDocType = @"contactOpportunity";

static NSString *kCBLPrefKeyUserID    = @"CBLFBUserID";
static NSString *kCBLPrefKeyHumanName = @"CBLFBHumanName";
static NSString *kCBLPrefKeyEmail     = @"CBLFBHumanMail";

static NSString* const kSyncUrl = @"http://sync.couchbasecloud.com:4984/cbl_crm_sg8";
static NSString* const kFBAppId = @"220375198143968";
static NSString* const kTestFlightID = @"220375198143968";

static NSString* const kEditTitle = @"Edit";
static NSString* const kSaveTitle = @"Save";

#define UIColorFromRGB(r,g,b) [UIColor colorWithRed:r/255.0  green:g/255.0 blue:b/255.0 alpha:1.0]

#define kNavigationBarColor    UIColorFromRGB(45,103,245)

#define kDarkBackgroundColor   UIColorFromRGB(58,128,247)
#define kLightBackgroundColor  UIColorFromRGB(242,242,242)
#define kTextColor             UIColorFromRGB(38,38,38)
#define kLabelTextColor        UIColorFromRGB(89,89,89)
#define kActionTextColor       UIColorFromRGB(58,128,247)

#endif
