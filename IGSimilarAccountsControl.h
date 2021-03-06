
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol IGSimilarAccountsControlDelegate, IGRaindropAnalyticsDelegate;
@class IGUser, NSMutableOrderedSet, NSString;

@interface IGSimilarAccountsControl : NSObject <UITableViewDataSource, UITableViewDelegate> {

	IGUser* _user;
	unsigned _similarAccountSource;
	id<IGSimilarAccountsControlDelegate> _similarAccountsControlDelegate;
	int _followButtonType;
	NSMutableOrderedSet* _similarAccounts;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;

}

@property (assign,nonatomic) int followButtonType;                                                                    //@synthesize followButtonType=_followButtonType - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * similarAccounts;                                                   //@synthesize similarAccounts=_similarAccounts - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;                                //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (nonatomic,retain) IGUser * user;                                                                           //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) unsigned similarAccountSource;                                                           //@synthesize similarAccountSource=_similarAccountSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGSimilarAccountsControlDelegate> similarAccountsControlDelegate;              //@synthesize similarAccountsControlDelegate=_similarAccountsControlDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(void)setSimilarAccountSource:(unsigned)arg1 ;
-(void)setFollowButtonType:(int)arg1 ;
-(NSMutableOrderedSet *)similarAccounts;
-(int)followButtonType;
-(id<IGSimilarAccountsControlDelegate>)similarAccountsControlDelegate;
-(unsigned)similarAccountSource;
-(id)initWithFollowButtonType:(int)arg1 source:(unsigned)arg2 analyticsDelegate:(id)arg3 ;
-(void)logImpressions;
-(void)setSimilarAccountsControlDelegate:(id<IGSimilarAccountsControlDelegate>)arg1 ;
-(void)setSimilarAccounts:(NSMutableOrderedSet *)arg1 ;
-(void)logUserImpressionAtPosition:(unsigned)arg1 ;
-(void)logTapActionAtPosition:(unsigned)arg1 ;
-(void)logFollowActionAtPosition:(unsigned)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

