
#import <Instagram/IGAlertBar.h>

@class UITapGestureRecognizer;

@interface IGAlertActionBar : IGAlertBar {

	char _shouldDismissOnTap;
	UITapGestureRecognizer* _tapGestureRecognizer;
	/*^block*/id _tapActionBlock;
	/*^block*/id _completeBlock;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,copy) id tapActionBlock;                                            //@synthesize tapActionBlock=_tapActionBlock - In the implementation block
@property (nonatomic,copy) id completeBlock;                                             //@synthesize completeBlock=_completeBlock - In the implementation block
@property (assign,nonatomic) char shouldDismissOnTap;                                    //@synthesize shouldDismissOnTap=_shouldDismissOnTap - In the implementation block
+(id)sharedAlertBar;
-(void)setTapActionBlock:(id)arg1 ;
-(void)setCompleteBlock:(id)arg1 ;
-(void)hideAfterDelay;
-(void)resetCallbackBlocks;
-(id)tapActionBlock;
-(char)shouldDismissOnTap;
-(void)cancelHidePerformSelector;
-(id)completeBlock;
-(void)dismissAndNotify:(char)arg1 ;
-(void)didShowAlertView;
-(void)didHideAlertView;
-(void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 delay:(double)arg4 updateExistingAlertBar:(char)arg5 actionBlock:(/*^block*/id)arg6 completeBlock:(/*^block*/id)arg7 ;
-(void)setShouldDismissOnTap:(char)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id)init;
-(void)willMoveToWindow:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

