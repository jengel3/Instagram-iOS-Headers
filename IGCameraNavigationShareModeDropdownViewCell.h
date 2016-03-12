
#import <UIKit/UITableViewCell.h>

@class IGCameraNavigationShareModeSelectorItem;

@interface IGCameraNavigationShareModeDropdownViewCell : UITableViewCell {

	IGCameraNavigationShareModeSelectorItem* _item;

}

@property (nonatomic,retain) IGCameraNavigationShareModeSelectorItem * item;              //@synthesize item=_item - In the implementation block
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(IGCameraNavigationShareModeSelectorItem *)item;
-(void)setSelected:(char)arg1 ;
-(void)setItem:(IGCameraNavigationShareModeSelectorItem *)arg1 ;
@end

