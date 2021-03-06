
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTView.h>
#import <UIKit/UITextViewDelegate.h>

@class RCTEventDispatcher, NSString, UITextView, RCTText, NSAttributedString, UIScrollView, UITextRange, UIColor, NSNumber, UIFont;

@interface RCTTextView : RCTView <UITextViewDelegate> {

	RCTEventDispatcher* _eventDispatcher;
	NSString* _placeholder;
	UITextView* _placeholderView;
	UITextView* _textView;
	RCTText* _richTextView;
	NSAttributedString* _pendingAttributedText;
	UIScrollView* _scrollView;
	UITextRange* _previousSelectionRange;
	unsigned _previousTextLength;
	float _previousContentHeight;
	NSString* _predictedText;
	char _blockTextShouldChange;
	char _nativeUpdatesInFlight;
	int _nativeEventCount;
	CGSize _previousContentSize;
	char _viewDidCompleteInitialLayout;
	char _blurOnSubmit;
	char _clearTextOnFocus;
	char _selectTextOnFocus;
	char _automaticallyAdjustContentInsets;
	UIColor* _placeholderTextColor;
	int _mostRecentEventCount;
	NSNumber* _maxLength;
	/*^block*/id _onChange;
	/*^block*/id _onContentSizeChange;
	/*^block*/id _onSelectionChange;
	/*^block*/id _onTextInput;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) char autoCorrect; 
@property (assign,nonatomic) char blurOnSubmit;                                  //@synthesize blurOnSubmit=_blurOnSubmit - In the implementation block
@property (assign,nonatomic) char clearTextOnFocus;                              //@synthesize clearTextOnFocus=_clearTextOnFocus - In the implementation block
@property (assign,nonatomic) char selectTextOnFocus;                             //@synthesize selectTextOnFocus=_selectTextOnFocus - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                          //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) char automaticallyAdjustContentInsets;              //@synthesize automaticallyAdjustContentInsets=_automaticallyAdjustContentInsets - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * placeholderTextColor;                     //@synthesize placeholderTextColor=_placeholderTextColor - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) int mostRecentEventCount;                           //@synthesize mostRecentEventCount=_mostRecentEventCount - In the implementation block
@property (nonatomic,retain) NSNumber * maxLength;                               //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy) id onChange;                                          //@synthesize onChange=_onChange - In the implementation block
@property (nonatomic,copy) id onContentSizeChange;                               //@synthesize onContentSizeChange=_onContentSizeChange - In the implementation block
@property (nonatomic,copy) id onSelectionChange;                                 //@synthesize onSelectionChange=_onSelectionChange - In the implementation block
@property (nonatomic,copy) id onTextInput;                                       //@synthesize onTextInput=_onTextInput - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)onChange;
-(id)initWithEventDispatcher:(id)arg1 ;
-(void)setAutoCorrect:(char)arg1 ;
-(char)autoCorrect;
-(void)reactWillMakeFirstResponder;
-(void)reactDidMakeFirstResponder;
-(char)selectTextOnFocus;
-(void)setSelectTextOnFocus:(char)arg1 ;
-(char)blurOnSubmit;
-(void)setBlurOnSubmit:(char)arg1 ;
-(int)mostRecentEventCount;
-(void)setMostRecentEventCount:(int)arg1 ;
-(id)onSelectionChange;
-(void)setOnSelectionChange:(id)arg1 ;
-(id)defaultPlaceholderTextColor;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2 ;
-(void)performTextUpdate;
-(void)removeReactSubview:(id)arg1 ;
-(void)performPendingTextUpdate;
-(id)defaultPlaceholderFont;
-(void)didUpdateReactSubviews;
-(char)clearTextOnFocus;
-(void)setClearTextOnFocus:(char)arg1 ;
-(char)automaticallyAdjustContentInsets;
-(void)setAutomaticallyAdjustContentInsets:(char)arg1 ;
-(void)setOnChange:(id)arg1 ;
-(id)onContentSizeChange;
-(void)setOnContentSizeChange:(id)arg1 ;
-(id)onTextInput;
-(void)setOnTextInput:(id)arg1 ;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(UIEdgeInsets)contentInset;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)canBecomeFirstResponder;
-(char)isFirstResponder;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIFont *)font;
-(void)setPlaceholder:(id)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)setMaxLength:(NSNumber *)arg1 ;
-(void)updateContentSize;
-(void)updateFrames;
-(void)updatePlaceholderVisibility;
-(void)updatePlaceholder;
-(NSNumber *)maxLength;
@end

