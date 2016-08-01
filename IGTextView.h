
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGTextViewListener.h>

@class IGTextViewAnnouncer, UITextView, UILabel, NSString;

@interface IGTextView : UIView <IGTextViewListener> {

	IGTextViewAnnouncer* _announcer;
	UITextView* _internalTextView;
	UILabel* _placeholderLabel;
	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) IGTextViewAnnouncer * announcer;                   //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,readonly) UITextView * internalTextView;                     //@synthesize internalTextView=_internalTextView - In the implementation block
@property (nonatomic,readonly) UILabel * placeholderLabel;                        //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (assign,nonatomic,__weak) id<IGTextViewDelegate> delegate; 
@property (assign,nonatomic) UIEdgeInsets insets;                                 //@synthesize insets=_insets - In the implementation block
@property (nonatomic,retain) NSString * placeholderText; 
@property (nonatomic,retain) NSString * text; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGTextViewAnnouncer *)announcer;
-(UITextView *)internalTextView;
-(void)textViewWillBeginEditing:(id)arg1 ;
-(void)textViewWillEndEditing:(id)arg1 ;
-(void)textView:(id)arg1 willChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textView:(id)arg1 willInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)textView:(id)arg1 willInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3 ;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGTextViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGTextViewDelegate>)delegate;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)canBecomeFirstResponder;
-(char)canResignFirstResponder;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(UILabel *)placeholderLabel;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)updatePlaceholderVisibility;
@end

