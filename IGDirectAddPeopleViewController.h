
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGDirectShareManagerDataSource.h>
#import <Instagram/IGTokenFieldDelegate.h>
#import <Instagram/FBKeyboardObserverDelegate.h>

@class IGDirectThread, IGUserSession, IGTokenField, IGDirectShareManager, FBKeyboardObserver, UIBarButtonItem, IGDirectThreadService, NSString;

@interface IGDirectAddPeopleViewController : IGViewController <IGDirectShareManagerDataSource, IGTokenFieldDelegate, FBKeyboardObserverDelegate> {

	IGDirectThread* _thread;
	IGUserSession* _userSession;
	IGTokenField* _tokenField;
	IGDirectShareManager* _shareManager;
	FBKeyboardObserver* _keyboardObserver;
	UIBarButtonItem* _doneButton;
	IGDirectThreadService* _threadService;

}

@property (nonatomic,retain) IGDirectThread * thread;                            //@synthesize thread=_thread - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                      //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGTokenField * tokenField;                          //@synthesize tokenField=_tokenField - In the implementation block
@property (nonatomic,retain) IGDirectShareManager * shareManager;                //@synthesize shareManager=_shareManager - In the implementation block
@property (nonatomic,retain) FBKeyboardObserver * keyboardObserver;              //@synthesize keyboardObserver=_keyboardObserver - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                       //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) IGDirectThreadService * threadService;              //@synthesize threadService=_threadService - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)setKeyboardObserver:(FBKeyboardObserver *)arg1 ;
-(FBKeyboardObserver *)keyboardObserver;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserverKeyboardDidShow:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(IGDirectThreadService *)threadService;
-(UIEdgeInsets)contentInsetsForManager:(id)arg1 ;
-(id)currentQueryForManager:(id)arg1 ;
-(id)recipientsForManager:(id)arg1 ;
-(char)manager:(id)arg1 wantsToSelectUser:(id)arg2 ;
-(void)manager:(id)arg1 triedToAddFilteredUser:(id)arg2 ;
-(IGTokenField *)tokenField;
-(void)setTokenField:(IGTokenField *)arg1 ;
-(id)tokenFieldViewForTokenOverlay:(id)arg1 ;
-(void)tokenFieldWillFocusUser:(id)arg1 ;
-(void)tokenFieldDidBeginEditing:(id)arg1 ;
-(char)tokenFieldCanFinishEditing:(id)arg1 ;
-(void)tokenFieldDidRequestSearch:(id)arg1 ;
-(void)tokenField:(id)arg1 didChangeQuery:(id)arg2 ;
-(void)tokenField:(id)arg1 didDeleteToken:(id)arg2 ;
-(void)tokenFieldWillBeginEditing:(id)arg1 ;
-(void)doneTapped;
-(void)updateDoneButtonState;
-(void)setThreadService:(IGDirectThreadService *)arg1 ;
-(id)initWithThread:(id)arg1 userSession:(id)arg2 ;
-(IGDirectShareManager *)shareManager;
-(void)setShareManager:(IGDirectShareManager *)arg1 ;
-(void)addUsers:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(IGUserSession *)userSession;
-(void)setThread:(IGDirectThread *)arg1 ;
-(IGDirectThread *)thread;
@end

