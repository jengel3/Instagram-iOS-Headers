
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UIView;

@interface IGTombstoneView : UIView {

	UIButton* _dismissButton;
	UIButton* _showPostButton;
	UIImageView* _checkmarkImageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIView* _footerViewSeperator;
	float _kTombstoneFooterSeperatorWidth;
	int _tombstoneReportType;

}

@property (nonatomic,readonly) UIButton * dismissButton;                          //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UIButton * showPostButton;                         //@synthesize showPostButton=_showPostButton - In the implementation block
@property (nonatomic,readonly) UIImageView * checkmarkImageView;                  //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                            //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UIView * footerViewSeperator;                      //@synthesize footerViewSeperator=_footerViewSeperator - In the implementation block
@property (nonatomic,readonly) float kTombstoneFooterSeperatorWidth;              //@synthesize kTombstoneFooterSeperatorWidth=_kTombstoneFooterSeperatorWidth - In the implementation block
@property (assign,nonatomic) int tombstoneReportType;                             //@synthesize tombstoneReportType=_tombstoneReportType - In the implementation block
-(id)createTitleLabel;
-(id)initWithFrame:(CGRect)arg1 tombstoneReportType:(int)arg2 ;
-(id)createCheckmarkImageView;
-(id)createMessageLabel;
-(void)configureForTombstoneReportType:(int)arg1 ;
-(void)setTombstoneReportType:(int)arg1 ;
-(int)tombstoneReportType;
-(UIButton *)showPostButton;
-(id)createFooterViewSeperator;
-(id)createShowPostButton;
-(id)createDismissButton;
-(float)kTombstoneFooterSeperatorWidth;
-(UIView *)footerViewSeperator;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(UIImageView *)checkmarkImageView;
-(UIButton *)dismissButton;
@end

