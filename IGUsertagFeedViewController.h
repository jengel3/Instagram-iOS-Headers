
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <UIKit/UIActionSheetDelegate.h>

@class IGUser, UIButton, UIBarButtonItem, UIActionSheet, NSMutableSet, NSString;

@interface IGUsertagFeedViewController : IGFeedViewController_DEPRECATED <UIActionSheetDelegate> {

	int _photoCount;
	char _submitting;
	IGUser* _user;
	UIButton* _hideFromProfileButton;
	UIBarButtonItem* _actionsButton;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _spinnerButton;
	UIActionSheet* _moreActionSheet;
	UIActionSheet* _settingsActionSheet;
	UIActionSheet* _hideActionSheet;
	NSMutableSet* _selectedItems;
	NSString* _viewingTitle;
	int _feedMode;

}

@property (nonatomic,retain) UIButton * hideFromProfileButton;                 //@synthesize hideFromProfileButton=_hideFromProfileButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * actionsButton;                  //@synthesize actionsButton=_actionsButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                   //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * spinnerButton;                  //@synthesize spinnerButton=_spinnerButton - In the implementation block
@property (nonatomic,retain) UIActionSheet * moreActionSheet;                  //@synthesize moreActionSheet=_moreActionSheet - In the implementation block
@property (nonatomic,retain) UIActionSheet * settingsActionSheet;              //@synthesize settingsActionSheet=_settingsActionSheet - In the implementation block
@property (nonatomic,retain) UIActionSheet * hideActionSheet;                  //@synthesize hideActionSheet=_hideActionSheet - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedItems;                     //@synthesize selectedItems=_selectedItems - In the implementation block
@property (nonatomic,retain) NSString * viewingTitle;                          //@synthesize viewingTitle=_viewingTitle - In the implementation block
@property (assign,nonatomic) int feedMode;                                     //@synthesize feedMode=_feedMode - In the implementation block
@property (assign,nonatomic) char submitting;                                  //@synthesize submitting=_submitting - In the implementation block
@property (nonatomic,readonly) IGUser * user;                                  //@synthesize user=_user - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(void)onCancelButtonTapped;
-(UIBarButtonItem *)spinnerButton;
-(void)setSpinnerButton:(UIBarButtonItem *)arg1 ;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)setViewingTitle:(NSString *)arg1 ;
-(void)onMoreButtonTapped;
-(void)setActionsButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)actionsButton;
-(void)setHideActionSheet:(UIActionSheet *)arg1 ;
-(void)setSettingsActionSheet:(UIActionSheet *)arg1 ;
-(void)setMoreActionSheet:(UIActionSheet *)arg1 ;
-(void)setHideFromProfileButton:(UIButton *)arg1 ;
-(UIButton *)hideFromProfileButton;
-(void)onHideButtonTapped;
-(int)feedMode;
-(void)updateHideButton;
-(UIActionSheet *)moreActionSheet;
-(UIActionSheet *)settingsActionSheet;
-(void)setFeedMode:(int)arg1 ;
-(char)submitting;
-(UIActionSheet *)hideActionSheet;
-(void)setSubmitting:(char)arg1 ;
-(void)onSuccessfulTagAction:(id)arg1 ;
-(void)onFailedTagAction:(id)arg1 ;
-(void)onSettingsButtonTapped;
-(void)onEditTagsButtonTapped;
-(void)onHideActionTapped;
-(NSString *)viewingTitle;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)updateTitle;
-(void)dealloc;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)viewDidLoad;
-(NSMutableSet *)selectedItems;
-(void)setSelectedItems:(NSMutableSet *)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)fetch;
@end

