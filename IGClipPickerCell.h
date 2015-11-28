
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGToolPickerCell.h>

@class NSString, UILabel, IGGradientView;

@interface IGClipPickerCell : IGToolPickerCell {

	NSString* _videoDurationText;
	UILabel* _clipDurationLabel;
	IGGradientView* _clipGradientView;

}

@property (nonatomic,copy) NSString * videoDurationText;                     //@synthesize videoDurationText=_videoDurationText - In the implementation block
@property (nonatomic,retain) UILabel * clipDurationLabel;                    //@synthesize clipDurationLabel=_clipDurationLabel - In the implementation block
@property (nonatomic,retain) IGGradientView * clipGradientView;              //@synthesize clipGradientView=_clipGradientView - In the implementation block
-(void)setDurationLabel:(id)arg1 ;
-(NSString *)videoDurationText;
-(void)setVideoDurationText:(NSString *)arg1 ;
-(IGGradientView *)clipGradientView;
-(UILabel *)clipDurationLabel;
-(void)setClipDurationLabel:(UILabel *)arg1 ;
-(void)setClipGradientView:(IGGradientView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

