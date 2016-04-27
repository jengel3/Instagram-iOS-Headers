
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UISegmentedControl.h>

@class NSArray;

@interface RCTSegmentedControl : UISegmentedControl {

	NSArray* _values;
	int _selectedIndex;
	/*^block*/id _onChange;

}

@property (nonatomic,copy) NSArray * values;                 //@synthesize values=_values - In the implementation block
@property (assign,nonatomic) int selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,copy) id onChange;                      //@synthesize onChange=_onChange - In the implementation block
-(id)onChange;
-(void)setOnChange:(id)arg1 ;
-(void)didChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
@end

