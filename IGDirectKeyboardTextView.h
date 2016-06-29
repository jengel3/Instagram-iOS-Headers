
#import <UIKit/UITextView.h>

@interface IGDirectKeyboardTextView : UITextView {

	char _shouldHoldFirstResponder;

}

@property (assign,nonatomic) char shouldHoldFirstResponder;              //@synthesize shouldHoldFirstResponder=_shouldHoldFirstResponder - In the implementation block
-(void)setShouldHoldFirstResponder:(char)arg1 ;
-(char)shouldHoldFirstResponder;
-(char)resignFirstResponder;
@end

