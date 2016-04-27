
#import <UIKit/UIView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSArray, NSDate, NSString;

@interface IGPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {

	/*^block*/id _actionBlock;
	NSArray* _items;
	int _selectedIndex;
	NSDate* _selectedDate;
	int _mode;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItems:(id)arg1 selectedIndex:(int)arg2 selectedDate:(id)arg3 doneBlock:(/*^block*/id)arg4 ;
-(void)submitAction;
-(id)initWithItems:(id)arg1 selectedIndex:(int)arg2 actionBlock:(/*^block*/id)arg3 ;
-(id)initWithSelectedDate:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)dateChanged:(id)arg1 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(float)pickerView:(id)arg1 widthForComponent:(int)arg2 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
@end

