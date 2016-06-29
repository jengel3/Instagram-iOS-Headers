

@class UIColor;

@interface ToolControllerConfig : NSObject {

	float _sectionInsetNonScrolling;
	float _sectionInsetScrolling;
	float _itemWidthNonScrolling;
	float _itemWidthScrolling;
	float _itemHeight;
	float _thumbnailSize;
	UIColor* _titleLabelColor;
	float _titleLabelFontSize;
	float _titleOffsetY;

}

@property (assign,nonatomic) float sectionInsetNonScrolling;              //@synthesize sectionInsetNonScrolling=_sectionInsetNonScrolling - In the implementation block
@property (assign,nonatomic) float sectionInsetScrolling;                 //@synthesize sectionInsetScrolling=_sectionInsetScrolling - In the implementation block
@property (assign,nonatomic) float itemWidthNonScrolling;                 //@synthesize itemWidthNonScrolling=_itemWidthNonScrolling - In the implementation block
@property (assign,nonatomic) float itemWidthScrolling;                    //@synthesize itemWidthScrolling=_itemWidthScrolling - In the implementation block
@property (assign,nonatomic) float itemHeight;                            //@synthesize itemHeight=_itemHeight - In the implementation block
@property (assign,nonatomic) float thumbnailSize;                         //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,retain) UIColor * titleLabelColor;                   //@synthesize titleLabelColor=_titleLabelColor - In the implementation block
@property (assign,nonatomic) float titleLabelFontSize;                    //@synthesize titleLabelFontSize=_titleLabelFontSize - In the implementation block
@property (assign,nonatomic) float titleOffsetY;                          //@synthesize titleOffsetY=_titleOffsetY - In the implementation block
+(id)layoutConfig;
+(id)boomerangConfig;
-(void)setSectionInsetNonScrolling:(float)arg1 ;
-(void)setSectionInsetScrolling:(float)arg1 ;
-(void)setItemWidthNonScrolling:(float)arg1 ;
-(void)setItemWidthScrolling:(float)arg1 ;
-(void)setTitleLabelColor:(UIColor *)arg1 ;
-(void)setTitleLabelFontSize:(float)arg1 ;
-(void)setTitleOffsetY:(float)arg1 ;
-(float)sectionInsetNonScrolling;
-(float)sectionInsetScrolling;
-(float)itemWidthNonScrolling;
-(float)itemWidthScrolling;
-(float)titleLabelFontSize;
-(float)titleOffsetY;
-(void)setThumbnailSize:(float)arg1 ;
-(UIColor *)titleLabelColor;
-(float)thumbnailSize;
-(void)setItemHeight:(float)arg1 ;
-(float)itemHeight;
@end

