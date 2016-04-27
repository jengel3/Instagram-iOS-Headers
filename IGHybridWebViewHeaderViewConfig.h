

@class NSString;

@interface IGHybridWebViewHeaderViewConfig : NSObject {

	NSString* _headerTitle;
	unsigned _colorScheme;

}

@property (nonatomic,readonly) NSString * headerTitle;              //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) unsigned colorScheme;                //@synthesize colorScheme=_colorScheme - In the implementation block
-(id)headerColor;
-(id)activeButtonColor;
-(id)tintColor;
-(id)initWithContext:(unsigned)arg1 ;
-(NSString *)headerTitle;
-(unsigned)colorScheme;
@end

