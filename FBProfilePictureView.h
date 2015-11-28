
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSDictionary, FBURLConnection, UIImageView;

@interface FBProfilePictureView : UIView {

	NSString* _profileID;
	int _pictureCropping;
	NSDictionary* _currentImageQueryParams;
	FBURLConnection* _connection;
	UIImageView* _imageView;

}

@property (nonatomic,copy) NSString * profileID;                                //@synthesize profileID=_profileID - In the implementation block
@property (assign,nonatomic) int pictureCropping;                               //@synthesize pictureCropping=_pictureCropping - In the implementation block
@property (nonatomic,copy) NSDictionary * currentImageQueryParams;              //@synthesize currentImageQueryParams=_currentImageQueryParams - In the implementation block
@property (nonatomic,retain) FBURLConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
-(void)setPictureCropping:(int)arg1 ;
-(int)pictureCropping;
-(id)_generateQueryParams;
-(NSDictionary *)currentImageQueryParams;
-(void)ensureImageViewContentMode;
-(void)setCurrentImageQueryParams:(NSDictionary *)arg1 ;
-(void)refreshImage:(char)arg1 ;
-(id)initWithProfileID:(id)arg1 pictureCropping:(int)arg2 ;
-(void)setProfileID:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)initialize;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(FBURLConnection *)connection;
-(void)setConnection:(FBURLConnection *)arg1 ;
-(id)_placeholderImage;
-(NSString *)profileID;
@end

