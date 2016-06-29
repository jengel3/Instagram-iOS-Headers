
#import <Instagram/IGUserListViewController.h>

@class UIBarButtonItem, UIButton;

@interface IGVideoViewCountUserListViewController : IGUserListViewController {

	char _showExpandedLikersList;
	char _showLikesBelowLikersList;
	UIBarButtonItem* _heartBarButtonItem;
	UIButton* _heartButton;
	UIBarButtonItem* _negativeSpacer;

}

@property (assign,nonatomic) char showExpandedLikersList;                       //@synthesize showExpandedLikersList=_showExpandedLikersList - In the implementation block
@property (assign,nonatomic) char showLikesBelowLikersList;                     //@synthesize showLikesBelowLikersList=_showLikesBelowLikersList - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * heartBarButtonItem;              //@synthesize heartBarButtonItem=_heartBarButtonItem - In the implementation block
@property (nonatomic,retain) UIButton * heartButton;                            //@synthesize heartButton=_heartButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * negativeSpacer;                  //@synthesize negativeSpacer=_negativeSpacer - In the implementation block
-(id)analyticsModule;
-(id)initWithFeedItemPK:(id)arg1 ;
-(id)rightBarButtonItemsForLoading;
-(id)rightBarButtonItemsForDone;
-(void)updateWithFeedItemPK:(id)arg1 ;
-(UIBarButtonItem *)negativeSpacer;
-(UIBarButtonItem *)heartBarButtonItem;
-(void)updateHeartButtonWithFeedItem:(id)arg1 animated:(char)arg2 ;
-(void)onHeartButtonPressed:(id)arg1 ;
-(char)shouldShowViewCountSection;
-(char)shouldShowLikersHeaderSection;
-(int)numberOfRowsInUsersSection;
-(char)shouldShowLikeCountSection;
-(id)viewCountCell;
-(id)likersHeaderCell;
-(id)likesCountCell;
-(id)likeText;
-(UIButton *)heartButton;
-(char)showExpandedLikersList;
-(void)setShowExpandedLikersList:(char)arg1 ;
-(char)showLikesBelowLikersList;
-(void)setShowLikesBelowLikersList:(char)arg1 ;
-(void)setHeartBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setHeartButton:(UIButton *)arg1 ;
-(void)setNegativeSpacer:(UIBarButtonItem *)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
@end

