/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:56 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

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

@property (nonatomic,retain) IGUser * user;                                                                           //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) unsigned similarAccountSource;                                                           //@synthesize similarAccountSource=_similarAccountSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGSimilarAccountsControlDelegate> similarAccountsControlDelegate;              //@synthesize similarAccountsControlDelegate=_similarAccountsControlDelegate - In the implementation block
@property (assign,nonatomic) int followButtonType;                                                                    //@synthesize followButtonType=_followButtonType - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * similarAccounts;                                                   //@synthesize similarAccounts=_similarAccounts - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;                                //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
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
-(void)logFollowActionAtPosition:(unsigned)arg1 ;
-(id<IGSimilarAccountsControlDelegate>)similarAccountsControlDelegate;
-(void)logUserImpressionAtPosition:(unsigned)arg1 ;
-(void)logTapActionAtPosition:(unsigned)arg1 ;
-(unsigned)similarAccountSource;
-(void)logSimilarAccountsEvent:(id)arg1 chainedUserPK:(id)arg2 targetUserPK:(id)arg3 source:(unsigned)arg4 position:(unsigned)arg5 ;
-(id)initWithFollowButtonType:(int)arg1 source:(unsigned)arg2 analyticsDelegate:(id)arg3 ;
-(void)logImpressions;
-(void)setSimilarAccountsControlDelegate:(id<IGSimilarAccountsControlDelegate>)arg1 ;
-(void)setSimilarAccounts:(NSMutableOrderedSet *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

