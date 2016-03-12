
#import <UIKit/UITextView.h>

@interface IGDirectKeyboardTextView : UITextView {

	char _shouldHoldFirstResponder;

}

@property (assign,nonatomic) char shouldHoldFirstResponder;              //@synthesize shouldHoldFirstResponder=_shouldHoldFirstResponder - In the implementation block
-(char)shouldHoldFirstResponder;
-(void)setShouldHoldFirstResponder:(char)arg1 ;
-(char)resignFirstResponder;
@end

