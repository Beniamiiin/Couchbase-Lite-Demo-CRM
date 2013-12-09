//
//  OpportunityStore.h
//  CBLiteCRM
//
//  Created by Danil on 04/12/13.
//  Copyright (c) 2013 Danil. All rights reserved.
//

#import "BaseStore.h"
@class Opportunity, Customer;
@interface OpportunitiesStore : BaseStore

- (CBLQuery*) queryOpportunitiesForCustomer:(Customer*)customer;

- (CBLQuery*) queryOpportunities;

- (Opportunity*) createOpportunityWithTitleOrReturnExist: (NSString*)title;
- (void) createFakeOpportunities;
@end
