    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
    #import <CoreGraphics/CoreGraphics.h>
    #import <QuartzCore/QuartzCore.h>
    #import <UIKit/UIKit.h>
    #import <MessageUI/MessageUI.h>
#import "CALayer+HLSExtensions.h"
#import "CAMediaTimingFunction+HLSExtensions.h"
#import "HLSActionSheet.h"
#import "HLSAnimation.h"
#import "HLSAnimationStep.h"
#import "HLSApplicationPreloader.h"
#import "HLSAssert.h"
#import "HLSAutorotation.h"
#import "HLSContainerStack.h"
#import "HLSConverters.h"
#import "HLSCursor.h"
#import "HLSError.h"
#import "HLSExpandingSearchBar.h"
#import "HLSFloat.h"
#import "HLSKeyboardInformation.h"
#import "HLSLabel.h"
#import "HLSLayerAnimation.h"
#import "HLSLayerAnimationStep.h"
#import "HLSLogger.h"
#import "HLSManagedObjectCopying.h"
#import "HLSModelManager.h"
#import "HLSNibView.h"
#import "HLSNotifications.h"
#import "HLSObjectAnimation.h"
#import "HLSOptionalFeatures.h"
#import "HLSPlaceholderInsetSegue.h"
#import "HLSPlaceholderViewController.h"
#import "HLSRuntime.h"
#import "HLSSlideshow.h"
#import "HLSStackController.h"
#import "HLSStackPushSegue.h"
#import "HLSSubtitleTableViewCell.h"
#import "HLSTableSearchDisplayViewController.h"
#import "HLSTableViewCell.h"
#import "HLSTask.h"
#import "HLSTaskGroup.h"
#import "HLSTaskManager.h"
#import "HLSTaskOperation.h"
#import "HLSTaskOperation+Protected.h"
#import "HLSTextField.h"
#import "HLSTransition.h"
#import "HLSUserInterfaceLock.h"
#import "HLSValidable.h"
#import "HLSValidators.h"
#import "HLSValue1TableViewCell.h"
#import "HLSValue2TableViewCell.h"
#import "HLSVector.h"
#import "HLSViewAnimation.h"
#import "HLSViewAnimationStep.h"
#import "HLSViewController.h"
#import "HLSWebViewController.h"
#import "HLSWizardViewController.h"
#import "NSArray+HLSExtensions.h"
#import "NSBundle+HLSExtensions.h"
#import "NSBundle+HLSDynamicLocalization.h"
#import "NSCalendar+HLSExtensions.h"
#import "NSData+HLSExtensions.h"
#import "NSDate+HLSExtensions.h"
#import "NSDateFormatter+HLSExtensions.h"
#import "NSDictionary+HLSExtensions.h"
#import "NSError+HLSExtensions.h"
#import "NSManagedObject+HLSExtensions.h"
#import "NSManagedObject+HLSValidation.h"
#import "NSObject+HLSExtensions.h"
#import "NSString+HLSExtensions.h"
#import "NSTimeZone+HLSExtensions.h"
#import "UIActionSheet+HLSExtensions.h"
#import "UIColor+HLSExtensions.h"
#import "UIControl+HLSExclusiveTouch.h"
#import "UIImage+HLSExtensions.h"
#import "UILabel+HLSDynamicLocalization.h"
#import "UINavigationBar+HLSExtensions.h"
#import "UINavigationController+HLSExtensions.h"
#import "UIPopoverController+HLSExtensions.h"
#import "UIScrollView+HLSExtensions.h"
#import "UISplitViewController+HLSExtensions.h"
#import "UITabBarController+HLSExtensions.h"
#import "UITextField+HLSExtensions.h"
#import "UITextField+HLSValidation.h"
#import "UITextView+HLSExtensions.h"
#import "UIToolbar+HLSExtensions.h"
#import "UIView+HLSExtensions.h"
#import "UIViewController+HLSExtensions.h"
#import "UIWebView+HLSExtensions.h"