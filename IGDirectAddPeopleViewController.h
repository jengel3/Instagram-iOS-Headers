
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGDirectShareManagerDataSource.h>
#import <Instagram/IGTokenFieldDelegate.h>
#import <Instagram/FBKeyboardObserverDelegate.h>

@class IGDirectThread, IGTokenField, IGDirectShareManager, FBKeyboardObserver, UIBarButtonItem, NSString;

@interface IGDirectAddPeopleViewController : IGViewController <IGDirectShareManagerDataSource, IGTokenFieldDelegate, FBKeyboardObserverDelegate> {

	IGDirectThread* _thread;
	IGTokenField* _tokenField;
	IGDirectShareManager* _shareManager;
	FBKeyboardObserver* _keyboardObserver;
	UIBarButtonItem* _doneButton;

}

@property (nonatomic,retain) IGDirectThread * thread;                            //@synthesize thread=_thread - In the implementation block
@property (nonatomic,retain) IGTokenField * tokenField;                          //@synthesize tokenField=_tokenField - In the implementation block
@property (nonatomic,retain) IGDirectShareManager * shareManager;                //@synthesize shareManager=_shareManager - In the implementation block
@property (nonatomic,retain) FBKeyboardObserver * keyboardObserver;              //@synthesize keyboardObserver=_keyboardObserver - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                       //@synthesize doneButton=_doneButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)contentInsetsForManager:(id)arg1 ;
-(id)currentQueryForManager:(id)arg1 ;
-(id)recipientsForManager:(id)arg1 ;
-(char)manager:(id)arg1 wantsToSelectUser:(id)arg2 ;
-(void)manager:(id)arg1 triedToAddFilteredUser:(id)arg2 ;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(void)doneTapped;
-(void)updateDoneButtonState;
-(void)setShareManager:(IGDirectShareManager *)arg1 ;
-(IGDirectShareManager *)shareManager;
-(void)setTokenField:(IGTokenField *)arg1 ;
-(IGTokenField *)tokenField;
-(FBKeyboardObserver *)keyboardObserver;
-(void)addUsers:(id)arg1 ;
-(id)tokenFieldViewForTokenOverlay:(id)arg1 ;
-(void)tokenFieldWillFocusUser:(id)arg1 ;
-(void)tokenFieldDidBeginEditing:(id)arg1 ;
-(char)tokenFieldCanFinishEditing:(id)arg1 ;
-(void)tokenFieldDidRequestSearch:(id)arg1 ;
-(void)tokenField:(id)arg1 didChangeQuery:(id)arg2 ;
-(void)tokenField:(id)arg1 didDeleteToken:(id)arg2 ;
-(void)setKeyboardObserver:(FBKeyboardObserver *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(id)initWithThread:(id)arg1 ;
-(void)setThread:(IGDirectThread *)arg1 ;
-(IGDirectThread *)thread;
@end

