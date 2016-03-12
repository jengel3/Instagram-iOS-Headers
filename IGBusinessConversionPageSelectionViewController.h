
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGFacebookPagesDataSourceDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGBusinessConversionFlowStep.h>

@protocol IGBusinessConversionViewControllerDelegate;
@class FBSDKAccessToken, IGFacebookPagesDataSource, NSArray, UIButton, UIView, NSDictionary, NSString;

@interface IGBusinessConversionPageSelectionViewController : IGGroupedTableViewController <IGFacebookPagesDataSourceDelegate, UITableViewDataSource, UITableViewDelegate, IGBusinessConversionFlowStep> {

	id<IGBusinessConversionViewControllerDelegate> _delegate;
	FBSDKAccessToken* _accessToken;
	IGFacebookPagesDataSource* _dataSource;
	NSArray* _pageDictionaries;
	UIButton* _dismissButton;
	UIButton* _nextButton;
	UIView* _headerView;
	NSDictionary* _selectedPageInfo;

}

@property (assign,nonatomic,__weak) id<IGBusinessConversionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBSDKAccessToken * accessToken;                                              //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,retain) IGFacebookPagesDataSource * dataSource;                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * pageDictionaries;                                                  //@synthesize pageDictionaries=_pageDictionaries - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                                    //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                                                       //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSDictionary * selectedPageInfo;                                             //@synthesize selectedPageInfo=_selectedPageInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)titleForFooterInSection:(int)arg1 ;
-(void)pagesDataSource:(id)arg1 didReceiveError:(id)arg2 ;
-(void)pagesDataSource:(id)arg1 didLoadPages:(id)arg2 ;
-(id)analyticsInfoForFlowStep;
-(id)newHeaderViewForTableViewWithWidth:(float)arg1 ;
-(NSDictionary *)selectedPageInfo;
-(void)progressToNextViewController;
-(NSArray *)pageDictionaries;
-(void)setSelectedPageInfo:(NSDictionary *)arg1 ;
-(void)setPageDictionaries:(NSArray *)arg1 ;
-(id)initWithFacebookAccessToken:(id)arg1 ;
-(void)setDataSource:(IGFacebookPagesDataSource *)arg1 ;
-(void)setDelegate:(id<IGBusinessConversionViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(IGFacebookPagesDataSource *)dataSource;
-(id<IGBusinessConversionViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)dismiss;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(FBSDKAccessToken *)accessToken;
-(void)updateNextButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(void)setAccessToken:(FBSDKAccessToken *)arg1 ;
-(char)prefersNavigationBarHidden;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

