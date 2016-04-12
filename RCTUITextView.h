
#import <UIKit/UITextView.h>

@interface RCTUITextView : UITextView {

	char _jsRequestingFirstResponder;
	char _textWasPasted;

}

@property (assign,nonatomic) char textWasPasted;              //@synthesize textWasPasted=_textWasPasted - In the implementation block
-(void)reactWillMakeFirstResponder;
-(void)reactDidMakeFirstResponder;
-(char)textWasPasted;
-(void)setTextWasPasted:(char)arg1 ;
-(char)canBecomeFirstResponder;
-(void)paste:(id)arg1 ;
@end

