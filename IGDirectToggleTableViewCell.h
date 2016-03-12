
#import <UIKit/UITableViewCell.h>

@protocol IGDirectToggleTableViewCellDelegate;
@class IGSwitch;

@interface IGDirectToggleTableViewCell : UITableViewCell {

	IGSwitch* _toggle;
	id<IGDirectToggleTableViewCellDelegate> _delegate;

}

@property (nonatomic,retain) IGSwitch * toggle;                                                    //@synthesize toggle=_toggle - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectToggleTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<IGDirectToggleTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGDirectToggleTableViewCellDelegate>)delegate;
-(void)setToggle:(IGSwitch *)arg1 ;
-(IGSwitch *)toggle;
@end

