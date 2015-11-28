
#import <Instagram/IGFindUsersViewDataSource.h>

@interface IGSuggestedFindUsersViewDataSource : IGFindUsersViewDataSource
-(void)fetchMore;
-(void)fetchList;
-(id)requestWithMaxId:(id)arg1 parameters:(id)arg2 ;
-(id)parseListResponse:(id)arg1 ;
@end

