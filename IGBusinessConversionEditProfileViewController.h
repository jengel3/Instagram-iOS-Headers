
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGBusinessConversionEditableProfileCellDelegate.h>
#import <Instagram/IGBusinessConversionFlowStep.h>

@protocol IGBusinessConversionViewControllerDelegate;
@class IGFacebookPageInfo, UIView, UIButton, NSDictionary, NSString;

@interface IGBusinessConversionEditProfileViewController : IGGroupedTableViewController <IGBusinessConversionEditableProfileCellDelegate, IGBusinessConversionFlowStep> {

	char _isEditingInfo;
	id<IGBusinessConversionViewControllerDelegate> _delegate;
	IGFacebookPageInfo* _pageInfo;
	UIView* _headerView;
	UIButton* _bottomButton;
	UIButton* _saveButton;
	NSDictionary* _validationErrors;

}

@property (assign,nonatomic,__weak) id<IGBusinessConversionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGFacebookPageInfo * pageInfo;                                               //@synthesize pageInfo=_pageInfo - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIButton * bottomButton;                                                     //@synthesize bottomButton=_bottomButton - In the implementation block
@property (nonatomic,retain) UIButton * saveButton;                                                       //@synthesize saveButton=_saveButton - In the implementation block
@property (assign,nonatomic) char isEditingInfo;                                                          //@synthesize isEditingInfo=_isEditingInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * validationErrors;                                             //@synthesize validationErrors=_validationErrors - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)bottomButton;
-(void)setBottomButton:(UIButton *)arg1 ;
-(IGFacebookPageInfo *)pageInfo;
-(id)newBottomButton;
-(id)newHeaderViewWithWidth:(float)arg1 ;
-(void)validateCurrentState;
-(NSDictionary *)validationErrors;
-(void)setIsEditingInfo:(char)arg1 ;
-(void)setValidationErrors:(NSDictionary *)arg1 ;
-(void)finishConversion;
-(char)isEditingInfo;
-(void)editableProfileCell:(id)arg1 didUpdateValue:(id)arg2 forDataKey:(id)arg3 ;
-(void)editableProfileCellDidBeginEditing:(id)arg1 ;
-(char)editableProfileCell:(id)arg1 wantsToSaveValue:(id)arg2 forKey:(id)arg3 ;
-(id)analyticsInfoForFlowStep;
-(id)initWithPageInfoDictionary:(id)arg1 ;
-(void)setPageInfo:(IGFacebookPageInfo *)arg1 ;
-(void)saveChanges;
-(void)setDelegate:(id<IGBusinessConversionViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<IGBusinessConversionViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIButton *)saveButton;
-(void)setSaveButton:(UIButton *)arg1 ;
-(void)backButtonTapped;
-(void)updateButtonState;
-(char)prefersNavigationBarHidden;
@end

