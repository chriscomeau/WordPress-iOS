#import <UIKit/UIKit.h>

@interface WPWalkthroughTextField : UITextField

@property (nonatomic) UIEdgeInsets textInsets;
@property (nonatomic) BOOL showTopLineSeparator;
@property (nonatomic) BOOL showSecureTextEntryToggle;

- (instancetype)initWithLeftViewImage:(UIImage *)image;

@end
