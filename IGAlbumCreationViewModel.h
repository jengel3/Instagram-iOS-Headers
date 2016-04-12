

@class NSString, IGFeedItem, UIColor, UIImage;

@interface IGAlbumCreationViewModel : NSObject {

	NSString* _currentAlbumTitle;
	IGFeedItem* _currentAlbum;

}

@property (nonatomic,readonly) IGFeedItem * currentAlbum;                     //@synthesize currentAlbum=_currentAlbum - In the implementation block
@property (nonatomic,readonly) NSString * currentAlbumTitle;                  //@synthesize currentAlbumTitle=_currentAlbumTitle - In the implementation block
@property (nonatomic,readonly) UIColor * currentAlbumTitleColor; 
@property (nonatomic,readonly) UIImage * currentAlbumImage; 
-(NSString *)currentAlbumTitle;
-(UIColor *)currentAlbumTitleColor;
-(char)showChangeTitleButton;
-(UIImage *)currentAlbumImage;
-(char)showCurrentAlbumButton;
-(IGFeedItem *)currentAlbum;
-(id)initWithModel:(id)arg1 ;
@end

