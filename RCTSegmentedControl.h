/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:38 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

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
