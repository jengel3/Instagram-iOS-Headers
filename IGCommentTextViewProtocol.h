

@protocol IGCommentTextViewProtocol <NSObject>
@required
-(void)setTextViewDelegate:(id)arg1;
-(void)addSendButtonTappedTarget:(id)arg1 action:(SEL)arg2;
-(id)autocompleteTextInput;
-(void)setPlaceholderText:(id)arg1;
-(void)setText:(id)arg1;
-(void)clearText;
-(void)insertText:(id)arg1;
-(id)textView;
-(void)setButtonEnabled:(char)arg1;

@end

