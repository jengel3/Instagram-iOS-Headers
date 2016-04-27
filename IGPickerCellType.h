
@class UIImageView, NSString, UIColor;


@protocol IGPickerCellType <NSObject>
@property (nonatomic,readonly) UIImageView * iconView; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) char showsHighlightIndicator; 
@property (nonatomic,retain) UIColor * highlightIndicatorColor; 
@required
+(CGSize*)cellSizeToFit:(CGSize)arg1;
-(char)showsHighlightIndicator;
-(void)setShowsHighlightIndicator:(char)arg1;
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(UIImageView *)iconView;
-(UIColor *)highlightIndicatorColor;
-(void)setHighlightIndicatorColor:(id)arg1;

@end

