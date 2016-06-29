
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView, UIImageView;

@interface IGDirectLinkPreview : UIView {

	unsigned _state;
	UILabel* _informationLabel;
	UIActivityIndicatorView* _activityIndicator;
	UIImageView* _errorIndicatorImageView;
	UIImageView* _previewImageView;
	UILabel* _titleLabel;
	UILabel* _urlLabel;

}

@property (nonatomic,retain) UILabel * informationLabel;                               //@synthesize informationLabel=_informationLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIImageView * errorIndicatorImageView;                    //@synthesize errorIndicatorImageView=_errorIndicatorImageView - In the implementation block
@property (nonatomic,retain) UIImageView * previewImageView;                           //@synthesize previewImageView=_previewImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * urlLabel;                                       //@synthesize urlLabel=_urlLabel - In the implementation block
@property (assign,nonatomic) unsigned state;                                           //@synthesize state=_state - In the implementation block
-(id)createTitleLabel;
-(id)createActivityView;
-(id)createErrorIndicator;
-(id)createInformationLabel;
-(id)createUrlLabel;
-(void)resetViewState;
-(UILabel *)informationLabel;
-(UILabel *)urlLabel;
-(UIImageView *)errorIndicatorImageView;
-(void)setLink:(id)arg1 withImage:(id)arg2 ;
-(void)setInformationLabel:(UILabel *)arg1 ;
-(void)setErrorIndicatorImageView:(UIImageView *)arg1 ;
-(void)setPreviewImageView:(UIImageView *)arg1 ;
-(void)setUrlLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)reset;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIImageView *)previewImageView;
@end

