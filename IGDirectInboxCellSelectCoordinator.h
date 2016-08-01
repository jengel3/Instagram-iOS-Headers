
#import <Instagram/IGDirectInboxThreadItemControllerSelectDelegate.h>

@class UIView, IGViewController, IGListAdapter, IGDirectPendingInboxAnalyticsLogger, UIBarButtonItem, UIButton, NSMutableSet, IGDirectPendingInboxService, NSString;

@interface IGDirectInboxCellSelectCoordinator : NSObject <IGDirectInboxThreadItemControllerSelectDelegate> {

	UIView* _actionBar;
	IGViewController* _viewController;
	IGListAdapter* _listAdapter;
	IGDirectPendingInboxAnalyticsLogger* _analyticsLogger;
	UIBarButtonItem* _editButton;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _spinnerButton;
	UIButton* _declineButton;
	UIButton* _allowButton;
	UIView* _buttonSeparator;
	NSMutableSet* _selectedItems;
	IGDirectPendingInboxService* _service;
	int _state;

}

@property (nonatomic,__weak,readonly) IGViewController * viewController;                                  //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,__weak,readonly) IGListAdapter * listAdapter;                                        //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,__weak,readonly) IGDirectPendingInboxAnalyticsLogger * analyticsLogger;              //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * editButton;                                              //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * cancelButton;                                            //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * spinnerButton;                                           //@synthesize spinnerButton=_spinnerButton - In the implementation block
@property (nonatomic,readonly) UIButton * declineButton;                                                  //@synthesize declineButton=_declineButton - In the implementation block
@property (nonatomic,readonly) UIButton * allowButton;                                                    //@synthesize allowButton=_allowButton - In the implementation block
@property (nonatomic,readonly) UIView * buttonSeparator;                                                  //@synthesize buttonSeparator=_buttonSeparator - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedItems;                                                //@synthesize selectedItems=_selectedItems - In the implementation block
@property (nonatomic,readonly) IGDirectPendingInboxService * service;                                     //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) int state;                                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) UIView * actionBar;                                                        //@synthesize actionBar=_actionBar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGListAdapter *)listAdapter;
-(void)toggleEditMode;
-(void)setupActionBar;
-(void)updateButtonsTitle;
-(void)allowTapped;
-(id)createButtonWithNormalStateColor:(id)arg1 highlightStateColor:(id)arg2 action:(SEL)arg3 ;
-(void)declineTapped;
-(UIButton *)allowButton;
-(IGDirectPendingInboxAnalyticsLogger *)analyticsLogger;
-(void)updateThreadsPendingStatus:(char)arg1 ;
-(id)computeSelectedThreadIdsFromAllPendingThreadIds:(id)arg1 ;
-(void)disableButtons;
-(void)enableButtons;
-(void)inboxThreadItemController:(id)arg1 didSelectViewModel:(id)arg2 ;
-(void)inboxThreadItemController:(id)arg1 didDeselectViewModel:(id)arg2 ;
-(id)initWithViewController:(id)arg1 listAdapter:(id)arg2 analyticsLogger:(id)arg3 ;
-(void)layoutActionBar;
-(char)hasSelected:(id)arg1 ;
-(UIView *)actionBar;
-(UIBarButtonItem *)spinnerButton;
-(int)state;
-(void)setState:(int)arg1 ;
-(char)isEditing;
-(UIBarButtonItem *)cancelButton;
-(IGViewController *)viewController;
-(NSMutableSet *)selectedItems;
-(void)setSelectedItems:(NSMutableSet *)arg1 ;
-(IGDirectPendingInboxService *)service;
-(UIView *)buttonSeparator;
-(UIBarButtonItem *)editButton;
-(UIButton *)declineButton;
@end

