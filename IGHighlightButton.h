
#import <UIKit/UIButton.h>

@protocol IGHighlightButtonDelegate;
@interface IGHighlightButton : UIButton {

	id<IGHighlightButtonDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGHighlightButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<IGHighlightButtonDelegate>)arg1 ;
-(id<IGHighlightButtonDelegate>)delegate;
-(void)setHighlighted:(char)arg1 ;
@end

