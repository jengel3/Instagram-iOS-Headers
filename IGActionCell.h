
#import <UIKit/UITableViewCell.h>

@class IGActionView;

@interface IGActionCell : UITableViewCell {

	IGActionView* _actionView;

}

@property (nonatomic,readonly) IGActionView * actionView;              //@synthesize actionView=_actionView - In the implementation block
+(id)reuseIdentifier;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(IGActionView *)actionView;
@end

