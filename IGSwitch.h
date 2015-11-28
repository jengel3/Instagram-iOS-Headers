
#import <UIKit/UISwitch.h>

@interface IGSwitch : UISwitch {

	/*^block*/id _switchBlock;

}

@property (nonatomic,copy) id switchBlock;              //@synthesize switchBlock=_switchBlock - In the implementation block
-(id)initWithSwitchBlock:(/*^block*/id)arg1 ;
-(id)switchBlock;
-(void)setSwitchBlock:(id)arg1 ;
-(void)toggleIfInAccessibilityMode;
-(void)onChange;
@end

