
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGHighlightButtonDelegate.h>

@class IGAlertAction, IGHighlightButton, UIView, NSString;

@interface IGActionView : UIView <IGHighlightButtonDelegate> {

	IGAlertAction* _action;
	IGHighlightButton* _button;
	UIView* _highlightView;

}

@property (nonatomic,readonly) IGHighlightButton * button;              //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) UIView * highlightView;                  //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) IGAlertAction * action;                    //@synthesize action=_action - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)highlightButton:(id)arg1 didBecomeHighlighted:(char)arg2 ;
-(void)buttonTapped;
-(IGHighlightButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(IGAlertAction *)action;
-(void)setAction:(IGAlertAction *)arg1 ;
-(UIView *)highlightView;
@end

