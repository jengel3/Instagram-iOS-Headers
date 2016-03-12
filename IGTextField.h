
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITextField.h>

@class UIImage, UIColor, UIView;

@interface IGTextField : UITextField {

	char _isValid;
	char _isVerifying;
	char _hideCursor;
	char _shouldHoldFirstResponder;
	UIImage* _icon;
	UIImage* _validIcon;
	UIImage* _invalidIcon;
	int _validity;
	int _iconSpacing;
	int _leftViewVerticalLayoutType;
	UIColor* _caretOverlayTintColor;
	UIView* _caretOverlayView;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) UIImage * icon;                               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UIImage * validIcon;                          //@synthesize validIcon=_validIcon - In the implementation block
@property (nonatomic,retain) UIImage * invalidIcon;                        //@synthesize invalidIcon=_invalidIcon - In the implementation block
@property (assign,nonatomic) int validity;                                 //@synthesize validity=_validity - In the implementation block
@property (assign,nonatomic) char isVerifying;                             //@synthesize isVerifying=_isVerifying - In the implementation block
@property (assign,nonatomic) char hideCursor;                              //@synthesize hideCursor=_hideCursor - In the implementation block
@property (assign,nonatomic) int iconSpacing;                              //@synthesize iconSpacing=_iconSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                          //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) int leftViewVerticalLayoutType;               //@synthesize leftViewVerticalLayoutType=_leftViewVerticalLayoutType - In the implementation block
@property (nonatomic,retain) UIColor * caretOverlayTintColor;              //@synthesize caretOverlayTintColor=_caretOverlayTintColor - In the implementation block
@property (assign,nonatomic) char shouldHoldFirstResponder;                //@synthesize shouldHoldFirstResponder=_shouldHoldFirstResponder - In the implementation block
@property (nonatomic,retain) UIView * caretOverlayView;                    //@synthesize caretOverlayView=_caretOverlayView - In the implementation block
-(void)setIconSpacing:(int)arg1 ;
-(void)wiggleAnimationWithCompletion:(/*^block*/id)arg1 ;
-(char)shouldHoldFirstResponder;
-(void)setShouldHoldFirstResponder:(char)arg1 ;
-(id)initWithPlaceholder:(id)arg1 ;
-(void)setLeftViewVerticalLayoutType:(int)arg1 ;
-(void)didChange;
-(UIImage *)validIcon;
-(UIImage *)invalidIcon;
-(UIView *)caretOverlayView;
-(int)leftViewVerticalLayoutType;
-(int)iconSpacing;
-(void)setValidIcon:(UIImage *)arg1 ;
-(void)setInvalidIcon:(UIImage *)arg1 ;
-(void)setIsVerifying:(char)arg1 ;
-(void)setCaretOverlayTintColor:(UIColor *)arg1 ;
-(char)isVerifying;
-(void)setHideCursor:(char)arg1 ;
-(UIColor *)caretOverlayTintColor;
-(void)setCaretOverlayView:(UIView *)arg1 ;
-(void)setValidity:(int)arg1 ;
-(int)validity;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)deleteBackward;
-(char)canResignFirstResponder;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(UIImage *)icon;
-(char)hideCursor;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
@end

