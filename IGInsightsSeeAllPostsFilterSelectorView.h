
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol IGInsightsSeeAllPostsFilterSelectorViewDelegate, IGInsightsContentRowListViewDelegate;
@class NSArray, UILabel, UIButton, UIPickerView, UIView, IGInsightsContentRowListView, NSString;

@interface IGInsightsSeeAllPostsFilterSelectorView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {

	id<IGInsightsSeeAllPostsFilterSelectorViewDelegate> _delegate;
	NSArray* _mediaTypes;
	NSArray* _dataOrderings;
	NSArray* _timeframes;
	float _width;
	UILabel* _headerLabel;
	UIButton* _submitButton;
	UIPickerView* _pickerView;
	UIView* _headerSeparator;
	IGInsightsContentRowListView* _educationView;
	UIView* _educationUnitSeparator;
	id<IGInsightsContentRowListViewDelegate> _educationUnitDelegate;

}

@property (assign,nonatomic,__weak) id<IGInsightsSeeAllPostsFilterSelectorViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaTypes;                                                        //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dataOrderings;                                                     //@synthesize dataOrderings=_dataOrderings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * timeframes;                                                        //@synthesize timeframes=_timeframes - In the implementation block
@property (nonatomic,readonly) float width;                                                                      //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) UILabel * headerLabel;                                                            //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,readonly) UIButton * submitButton;                                                          //@synthesize submitButton=_submitButton - In the implementation block
@property (nonatomic,retain) UIPickerView * pickerView;                                                          //@synthesize pickerView=_pickerView - In the implementation block
@property (nonatomic,retain) UIView * headerSeparator;                                                           //@synthesize headerSeparator=_headerSeparator - In the implementation block
@property (nonatomic,retain) IGInsightsContentRowListView * educationView;                                       //@synthesize educationView=_educationView - In the implementation block
@property (nonatomic,retain) UIView * educationUnitSeparator;                                                    //@synthesize educationUnitSeparator=_educationUnitSeparator - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsContentRowListViewDelegate> educationUnitDelegate;              //@synthesize educationUnitDelegate=_educationUnitDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActiveDataOrdering:(unsigned)arg1 ;
-(void)setActiveMediaType:(unsigned)arg1 ;
-(void)setActiveTimeframe:(unsigned)arg1 ;
-(NSArray *)dataOrderings;
-(void)setDataOrderings:(NSArray *)arg1 ;
-(NSArray *)timeframes;
-(void)setTimeframes:(NSArray *)arg1 ;
-(void)setEducationUnitDelegate:(id<IGInsightsContentRowListViewDelegate>)arg1 ;
-(void)setParagraphUnits:(id)arg1 ;
-(void)initializeHeader;
-(void)submitButtonClick:(id)arg1 ;
-(IGInsightsContentRowListView *)educationView;
-(void)setEducationView:(IGInsightsContentRowListView *)arg1 ;
-(id<IGInsightsContentRowListViewDelegate>)educationUnitDelegate;
-(UIView *)educationUnitSeparator;
-(void)setEducationUnitSeparator:(UIView *)arg1 ;
-(UIButton *)submitButton;
-(UIView *)headerSeparator;
-(id)titleForRow:(int)arg1 forComponent:(int)arg2 ;
-(void)setHeaderSeparator:(UIView *)arg1 ;
-(UIPickerView *)pickerView;
-(void)setPickerView:(UIPickerView *)arg1 ;
-(void)setDelegate:(id<IGInsightsSeeAllPostsFilterSelectorViewDelegate>)arg1 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(float)pickerView:(id)arg1 widthForComponent:(int)arg2 ;
-(id)init;
-(void)layoutSubviews;
-(id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInsightsSeeAllPostsFilterSelectorViewDelegate>)delegate;
-(float)width;
-(void)setMediaTypes:(NSArray *)arg1 ;
-(NSArray *)mediaTypes;
-(UILabel *)headerLabel;
@end
