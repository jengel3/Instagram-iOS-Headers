
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTComponent.h>

@class NSNumber, NSDictionary, NSMutableArray, NSString, UIColor;

@interface RCTShadowView : NSObject <RCTComponent> {

	unsigned _propagationLifecycle;
	unsigned _textLifecycle;
	NSDictionary* _lastParentProperties;
	NSMutableArray* _reactSubviews;
	char _recomputePadding;
	char _recomputeMargin;
	char _recomputeBorder;
	char _didUpdateSubviews;
	float _paddingMetaProps[7];
	float _marginMetaProps[7];
	float _borderMetaProps[7];
	char _newView;
	char _hidden;
	NSNumber* _reactTag;
	RCTShadowView* _superview;
	CSSNodeRef _cssNode;
	NSString* _viewName;
	UIColor* _backgroundColor;
	unsigned _layoutLifecycle;
	/*^block*/id _onLayout;
	int _zIndex;
	CGRect _frame;

}

@property (nonatomic,__weak,readonly) RCTShadowView * superview;              //@synthesize superview=_superview - In the implementation block
@property (nonatomic,readonly) CSSNodeRef cssNode;                            //@synthesize cssNode=_cssNode - In the implementation block
@property (nonatomic,copy) NSString * viewName;                               //@synthesize viewName=_viewName - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) unsigned layoutLifecycle;                        //@synthesize layoutLifecycle=_layoutLifecycle - In the implementation block
@property (nonatomic,copy) id onLayout;                                       //@synthesize onLayout=_onLayout - In the implementation block
@property (assign,getter=isNewView,nonatomic) char newView;                   //@synthesize newView=_newView - In the implementation block
@property (assign,getter=isHidden,nonatomic) char hidden;                     //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) float top; 
@property (assign,nonatomic) float left; 
@property (assign,nonatomic) float bottom; 
@property (assign,nonatomic) float right; 
@property (assign,nonatomic) float width; 
@property (assign,nonatomic) float height; 
@property (assign,nonatomic) float minWidth; 
@property (assign,nonatomic) float maxWidth; 
@property (assign,nonatomic) float minHeight; 
@property (assign,nonatomic) float maxHeight; 
@property (assign,nonatomic) CGRect frame;                                    //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) float borderWidth; 
@property (assign,nonatomic) float borderTopWidth; 
@property (assign,nonatomic) float borderLeftWidth; 
@property (assign,nonatomic) float borderBottomWidth; 
@property (assign,nonatomic) float borderRightWidth; 
@property (assign,nonatomic) float margin; 
@property (assign,nonatomic) float marginVertical; 
@property (assign,nonatomic) float marginHorizontal; 
@property (assign,nonatomic) float marginTop; 
@property (assign,nonatomic) float marginLeft; 
@property (assign,nonatomic) float marginBottom; 
@property (assign,nonatomic) float marginRight; 
@property (assign,nonatomic) float padding; 
@property (assign,nonatomic) float paddingVertical; 
@property (assign,nonatomic) float paddingHorizontal; 
@property (assign,nonatomic) float paddingTop; 
@property (assign,nonatomic) float paddingLeft; 
@property (assign,nonatomic) float paddingBottom; 
@property (assign,nonatomic) float paddingRight; 
@property (assign,nonatomic) int flexDirection; 
@property (assign,nonatomic) int justifyContent; 
@property (assign,nonatomic) int alignSelf; 
@property (assign,nonatomic) int alignItems; 
@property (assign,nonatomic) int position; 
@property (assign,nonatomic) int flexWrap; 
@property (assign,nonatomic) float flex; 
@property (assign,nonatomic) int zIndex;                                      //@synthesize zIndex=_zIndex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSNumber * reactTag;                               //@synthesize reactTag=_reactTag - In the implementation block
-(NSNumber *)reactTag;
-(NSString *)viewName;
-(void)setViewName:(NSString *)arg1 ;
-(void)dirtyLayout;
-(void)dirtyText;
-(CSSNodeRef)cssNode;
-(id)reactSuperview;
-(id)processUpdatedProperties:(id)arg1 parentProperties:(id)arg2 ;
-(void)applyLayoutNode:(CSSNodeRef)arg1 viewsWithNewFrame:(id)arg2 absolutePosition:(CGPoint)arg3 ;
-(void)dirtyPropagation;
-(void)collectUpdatedFrames:(id)arg1 withFrame:(CGRect)arg2 hidden:(char)arg3 absolutePosition:(CGPoint)arg4 ;
-(char)isCSSLeafNode;
-(void)applyLayoutToChildren:(CSSNodeRef)arg1 viewsWithNewFrame:(id)arg2 absolutePosition:(CGPoint)arg3 ;
-(id)reactTagAtPoint:(CGPoint)arg1 ;
-(char)isReactRootView;
-(char)isTextDirty;
-(id)reactSubviews;
-(void)setTextComputed;
-(UIEdgeInsets)paddingAsInsets;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2 ;
-(void)removeReactSubview:(id)arg1 ;
-(void)didUpdateReactSubviews;
-(void)setReactTag:(NSNumber *)arg1 ;
-(void)didSetProps:(id)arg1 ;
-(void)collectUpdatedProperties:(id)arg1 parentProperties:(id)arg2 ;
-(void)addRecursiveDescriptionToString:(id)arg1 atLevel:(unsigned)arg2 ;
-(CGRect)measureLayoutRelativeToAncestor:(id)arg1 ;
-(char)isLayoutDirty;
-(char)isPropagationDirty;
-(void)setMarginVertical:(float)arg1 ;
-(float)marginVertical;
-(void)setMarginHorizontal:(float)arg1 ;
-(float)marginHorizontal;
-(void)setPaddingVertical:(float)arg1 ;
-(float)paddingVertical;
-(void)setPaddingHorizontal:(float)arg1 ;
-(float)paddingHorizontal;
-(void)setFlex:(float)arg1 ;
-(float)flex;
-(void)setFlexDirection:(int)arg1 ;
-(int)flexDirection;
-(void)setJustifyContent:(int)arg1 ;
-(int)justifyContent;
-(void)setAlignSelf:(int)arg1 ;
-(int)alignSelf;
-(void)setAlignItems:(int)arg1 ;
-(int)alignItems;
-(void)setFlexWrap:(int)arg1 ;
-(int)flexWrap;
-(unsigned)layoutLifecycle;
-(void)setLayoutLifecycle:(unsigned)arg1 ;
-(id)onLayout;
-(void)setOnLayout:(id)arg1 ;
-(char)isNewView;
-(void)setNewView:(char)arg1 ;
-(float)marginBottom;
-(float)marginLeft;
-(float)marginRight;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(NSString *)description;
-(RCTShadowView *)superview;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(id)recursiveDescription;
-(float)width;
-(void)setPadding:(float)arg1 ;
-(float)padding;
-(void)setBorderWidth:(float)arg1 ;
-(float)height;
-(float)marginTop;
-(void)setMarginTop:(float)arg1 ;
-(float)borderWidth;
-(float)maxWidth;
-(float)paddingTop;
-(void)setPaddingTop:(float)arg1 ;
-(void)setWidth:(float)arg1 ;
-(void)setPaddingLeft:(float)arg1 ;
-(void)setPaddingRight:(float)arg1 ;
-(float)paddingLeft;
-(float)paddingRight;
-(void)setMargin:(float)arg1 ;
-(float)margin;
-(float)paddingBottom;
-(void)setPaddingBottom:(float)arg1 ;
-(void)setLeft:(float)arg1 ;
-(void)setMaxWidth:(float)arg1 ;
-(void)setHeight:(float)arg1 ;
-(int)zIndex;
-(void)setZIndex:(int)arg1 ;
-(float)minHeight;
-(float)minWidth;
-(void)setTopLeft:(CGPoint)arg1 ;
-(void)setIntrinsicContentSize:(CGSize)arg1 ;
-(float)left;
-(float)top;
-(float)right;
-(float)bottom;
-(void)setTop:(float)arg1 ;
-(void)setRight:(float)arg1 ;
-(void)setBottom:(float)arg1 ;
-(float)maxHeight;
-(void)setMinHeight:(float)arg1 ;
-(void)setMaxHeight:(float)arg1 ;
-(float)borderTopWidth;
-(void)setBorderTopWidth:(float)arg1 ;
-(float)borderRightWidth;
-(void)setBorderRightWidth:(float)arg1 ;
-(float)borderBottomWidth;
-(void)setBorderBottomWidth:(float)arg1 ;
-(float)borderLeftWidth;
-(void)setBorderLeftWidth:(float)arg1 ;
-(void)setMarginRight:(float)arg1 ;
-(void)setMarginBottom:(float)arg1 ;
-(void)setMarginLeft:(float)arg1 ;
-(void)setMinWidth:(float)arg1 ;
@end

