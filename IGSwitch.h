
#import <UIKit/UISwitch.h>

@interface IGSwitch : UISwitch {

	/*^block*/id _switchBlock;

}

@property (nonatomic,copy) id switchBlock;              //@synthesize switchBlock=_switchBlock - In the implementation block
-(void)onChange;
-(id)switchBlock;
-(void)toggleIfInAccessibilityMode;
-(void)setSwitchBlock:(id)arg1 ;
-(id)initWithSwitchBlock:(/*^block*/id)arg1 ;
@end

