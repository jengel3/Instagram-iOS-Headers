

@protocol IGImageProcessor <NSObject>
@required
-(id)processedImageFromDecodedImage:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3;
-(id)cacheKeyURLFromURL:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3;

@end

