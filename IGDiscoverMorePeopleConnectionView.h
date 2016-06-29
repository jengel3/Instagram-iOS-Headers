
#import <Instagram/IGPlainTableViewCell.h>

@class UITapGestureRecognizer, IGDiscoverMorePeopleServiceConfiguration;

@interface IGDiscoverMorePeopleConnectionView : IGPlainTableViewCell {

	/*^block*/id _tapAction;
	UITapGestureRecognizer* _tapGestureRecognizer;
	IGDiscoverMorePeopleServiceConfiguration* _serviceConfiguration;

}

@property (nonatomic,__weak,readonly) UITapGestureRecognizer * tapGestureRecognizer;                         //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) IGDiscoverMorePeopleServiceConfiguration * serviceConfiguration;              //@synthesize serviceConfiguration=_serviceConfiguration - In the implementation block
@property (nonatomic,copy) id tapAction;                                                                     //@synthesize tapAction=_tapAction - In the implementation block
+(id)imageNameForViewType:(int)arg1 ;
+(float)defaultHeight;
-(void)configureWithConnectionViewType:(int)arg1 ;
-(void)setTapAction:(id)arg1 ;
-(void)updateConnectionView;
-(void)onCellTapped;
-(id)tapAction;
-(IGDiscoverMorePeopleServiceConfiguration *)serviceConfiguration;
-(void)setServiceConnected:(char)arg1 withConnectionCount:(unsigned)arg2 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

