/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:56 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <Instagram/IGClusterBrowsingCategoriesButtonsViewDelegate.h>

@protocol IGClusterBrowsingV2ViewControllerDelegate;
@class IGRegistrationClusterBrowsingCategoriesView, IGClusterBrowsingSelectionSummaryView, UIActivityIndicatorView, NSMutableDictionary, IGClusterBrowsingSuggestedUserListViewController, IGClusterBrowsingSuggestedUsersViewDataSource, NSString;

@interface IGClusterBrowsingV2ViewController : IGViewController <IGClusterBrowsingCategoriesButtonsViewDelegate> {

	id<IGClusterBrowsingV2ViewControllerDelegate> _delegate;
	IGRegistrationClusterBrowsingCategoriesView* _categoriesView;
	IGClusterBrowsingSelectionSummaryView* _indicatorView;
	UIActivityIndicatorView* _spinner;
	NSMutableDictionary* _clusterDict;
	IGClusterBrowsingSuggestedUserListViewController* _findUsersViewController;
	IGClusterBrowsingSuggestedUsersViewDataSource* _findUsersViewDataSource;

}

@property (assign,nonatomic,__weak) id<IGClusterBrowsingV2ViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRegistrationClusterBrowsingCategoriesView * categoriesView;                            //@synthesize categoriesView=_categoriesView - In the implementation block
@property (nonatomic,retain) IGClusterBrowsingSelectionSummaryView * indicatorView;                                   //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                       //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clusterDict;                                                       //@synthesize clusterDict=_clusterDict - In the implementation block
@property (nonatomic,retain) IGClusterBrowsingSuggestedUserListViewController * findUsersViewController;              //@synthesize findUsersViewController=_findUsersViewController - In the implementation block
@property (nonatomic,retain) IGClusterBrowsingSuggestedUsersViewDataSource * findUsersViewDataSource;                 //@synthesize findUsersViewDataSource=_findUsersViewDataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)categoriesButtonsView:(id)arg1 didTapClusterID:(id)arg2 atPosition:(int)arg3 ;
-(void)categoriesButtonsViewDidSkip:(id)arg1 ;
-(IGRegistrationClusterBrowsingCategoriesView *)categoriesView;
-(void)setCategoriesView:(IGRegistrationClusterBrowsingCategoriesView *)arg1 ;
-(void)fetchInterests;
-(void)didTapContinue;
-(NSMutableDictionary *)clusterDict;
-(IGClusterBrowsingSuggestedUsersViewDataSource *)findUsersViewDataSource;
-(void)setFindUsersViewController:(IGClusterBrowsingSuggestedUserListViewController *)arg1 ;
-(IGClusterBrowsingSuggestedUserListViewController *)findUsersViewController;
-(void)updateIndicatorViewWithClustersCount:(int)arg1 ;
-(void)setClusterDict:(NSMutableDictionary *)arg1 ;
-(void)setFindUsersViewDataSource:(IGClusterBrowsingSuggestedUsersViewDataSource *)arg1 ;
-(void)setDelegate:(id<IGClusterBrowsingV2ViewControllerDelegate>)arg1 ;
-(id)init;
-(id<IGClusterBrowsingV2ViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(IGClusterBrowsingSelectionSummaryView *)indicatorView;
-(void)setIndicatorView:(IGClusterBrowsingSelectionSummaryView *)arg1 ;
-(char)prefersNavigationBarHidden;
@end

