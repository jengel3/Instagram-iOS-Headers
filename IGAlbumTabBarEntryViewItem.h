

@class NSString, UIView;

@interface IGAlbumTabBarEntryViewItem : NSObject {

	NSString* _title;
	UIView* _imageView;

}

@property (nonatomic,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithTitle:(id)arg1 imageView:(id)arg2 ;
-(NSString *)title;
-(UIView *)imageView;
@end

