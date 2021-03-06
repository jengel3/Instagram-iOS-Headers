
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Instagram/IGAutocompleteControllerTextInput.h>

@protocol IGEditPostTextViewControllerDelegate;
@class UITextView, UIControl, UILabel, NSString;

@interface IGEditPostTextViewController : UIViewController <UITextViewDelegate, IGAutocompleteControllerTextInput> {

	id<IGEditPostTextViewControllerDelegate> _delegate;
	UITextView* _textView;
	UIControl* _textViewContainer;
	UILabel* _placeholderLabel;
	float _height;

}

@property (nonatomic,retain) UITextView * textView;                                                 //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIControl * textViewContainer;                                         //@synthesize textViewContainer=_textViewContainer - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                                            //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (assign,nonatomic) float height;                                                          //@synthesize height=_height - In the implementation block
@property (assign,nonatomic,__weak) id<IGEditPostTextViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isEditingText; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * placeholderText; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,nonatomic) int spellCheckingType; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
+(float)leadingHeight;
-(float)textHeightForWidth:(float)arg1 ;
-(float)textContentLayoutHeightForWidth:(float)arg1 ;
-(float)textContentLayoutHeight;
-(void)updateViewHeight;
-(UIControl *)textViewContainer;
-(void)setTextViewContainer:(UIControl *)arg1 ;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)setDelegate:(id<IGEditPostTextViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGEditPostTextViewControllerDelegate>)delegate;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)loadView;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setTextView:(UITextView *)arg1 ;
-(NSRange)selectedRange;
-(void)beginEditing;
-(id)beginningOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)setSelectedTextRange:(id)arg1 ;
-(void)clearText;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(int)spellCheckingType;
-(void)setSpellCheckingType:(int)arg1 ;
-(void)viewDidLoad;
-(float)height;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(CGRect)caretRect;
-(id)accessibilityValue;
-(UITextView *)textView;
-(void)setHeight:(float)arg1 ;
-(UILabel *)placeholderLabel;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(char)isEditingText;
-(void)updatePlaceholderVisibility;
@end

