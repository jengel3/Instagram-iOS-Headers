
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, IGCircularProgressView, UIImageView;

@interface IGMediaTabBarUploadProgressIndicator : UIView {

	NSArray* _uploads;
	IGCircularProgressView* _progressView;
	UIImageView* _imageView;
	float _currentProgress;

}

@property (nonatomic,retain) NSArray * uploads;                                  //@synthesize uploads=_uploads - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) float currentProgress;                              //@synthesize currentProgress=_currentProgress - In the implementation block
-(void)removeKVO;
-(void)reloadUploads;
-(void)observeAlbumChanges;
-(void)addKVO;
-(void)setCurrentProgress:(float)arg1 ;
-(float)currentProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgressView:(IGCircularProgressView *)arg1 ;
-(IGCircularProgressView *)progressView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)updateProgress;
-(void)setUploads:(NSArray *)arg1 ;
-(NSArray *)uploads;
@end

